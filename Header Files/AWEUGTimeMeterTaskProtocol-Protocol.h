//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@protocol AWEUGTimeMeterTaskProtocol <NSObject>

@property (copy, nonatomic) NSString *currentUID;
@property (copy, nonatomic) NSNumber *currentProgress;

- (id)currentUID;
- (void)setCurrentUID:(id)arg0;
- (id)taskID;
- (id)currentProgress;
- (void)setCurrentProgress:(id)arg0;

@optional

- (id)taskToken;
- (double)taskDuration;

@end
