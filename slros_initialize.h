#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block micromodelv2/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_micromodelv2_std_msgs_Float64> Sub_micromodelv2_19;

// For Block micromodelv2/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Sub_micromodelv2_22;

// For Block micromodelv2/Subscribe3
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Sub_micromodelv2_15;

// For Block micromodelv2/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Pub_micromodelv2_29;

// For Block micromodelv2/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Pub_micromodelv2_50;

// For Block micromodelv2/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Pub_micromodelv2_51;

// For Block micromodelv2/Publish3
extern SimulinkPublisher<std_msgs::UInt8, SL_Bus_micromodelv2_std_msgs_UInt8> Pub_micromodelv2_74;

// For Block micromodelv2/Publisher/Publish3
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Pub_micromodelv2_57;

// For Block micromodelv2/Publisher1/Publish3
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelv2_geometry_msgs_Twist> Pub_micromodelv2_65;

// For Block micromodelv2/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelv2_30;

// For Block micromodelv2/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelv2_31;

// For Block micromodelv2/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelv2_32;

// For Block micromodelv2/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelv2_33;

// For Block micromodelv2/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelv2_40;

// For Block micromodelv2/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelv2_41;

// For Block micromodelv2/Get Parameter7
extern SimulinkParameterGetter<boolean_T, bool> ParamGet_micromodelv2_67;

void slros_node_init(int argc, char** argv);

#endif
