//
//     Generated by private class-dump
//

@class Acceleration, Gyro, DeviceParameter;

@interface CronUploadInfo : GPBMessage

@property (retain, nonatomic) DeviceParameter *deviceParameter;
@property (nonatomic) BOOL hasDeviceParameter;
@property (retain, nonatomic) Gyro *gyro;
@property (nonatomic) BOOL hasGyro;
@property (retain, nonatomic) Acceleration *acceleration;
@property (nonatomic) BOOL hasAcceleration;

+ (id)descriptor;

@end
