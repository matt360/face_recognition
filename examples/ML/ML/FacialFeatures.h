#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "Consts.h"

class FacialFeatures
{
public:
	FacialFeatures();
    // virtual destructor ensures that both destructors will be called; of the base and the derived class
	virtual ~FacialFeatures();

    void PopulateFacialFeaturesVectors(const std::vector<int>& learning_data);
    void DisplayFacialFeaturesVectors();
    void CalculateEmotionWeightings(const char* file_name);

    // emotion weighted values (emv)
    //std::vector<int> top_lip_bottom_lip_distance;
    //std::vector<int> left_eyebrow_left_eye_distance;
    //std::vector<int> right_eyebrow_right_eye_distance;
    //std::vector<int> nose_tip_nose_bridge_distance;
    std::vector<int> weightings_vector;
    // to store smile weightings
    std::ofstream weightingsFile;

public:
    // learning variables
    // FILE to store .csv
    //FILE** file;
    // vector to store the data of the facial features to learn from
    std::vector<int> learning_data;
protected:
    // face features vectors (stack memory)
    std::vector<int> chin;
    std::vector<int> left_eyebrow;
    std::vector<int> right_eyebrow;
    std::vector<int> nose_bridge;
    std::vector<int> nose_tip;
    std::vector<int> left_eye;
    std::vector<int> right_eye;
    std::vector<int> top_lip;
    std::vector<int> bottom_lip;
};
