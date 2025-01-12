//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AFDLaunchLandingPitayaResult : NSObject <NSCoding> {
    NSDictionary *_message;
    double _timestamp;
    NSDictionary *_landingConfig;
}

@property (retain, nonatomic) NSDictionary *landingConfig;
@property (copy, nonatomic) NSDictionary *message;
@property (nonatomic) double timestamp;

- (BOOL)isLanding;
- (id)landingConfig;
- (void)setLandingConfig:(id)arg0;
- (void)setMessage:(id)arg0;
- (BOOL)isExpired;
- (double)timestamp;
- (id)traceID;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)message;
- (id)initWithMessage:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setTimestamp:(double)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;

@end
