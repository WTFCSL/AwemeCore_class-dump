//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveGuideForbiddenModel : NSObject {
    BOOL _isForever;
    long long _banDuration;
    NSNumber *_lastBanLogID;
    long long _banTime;
    long long _timestamp;
}

@property (readonly, nonatomic) long long banDuration;
@property (readonly, nonatomic) BOOL isForever;
@property (readonly, nonatomic) NSNumber *lastBanLogID;
@property (readonly, nonatomic) long long banTime;
@property (readonly, nonatomic) long long timestamp;

- (BOOL)isForever;
- (long long)banDuration;
- (long long)banTime;
- (id)lastBanLogID;
- (id)initWithJSON:(id)arg0;
- (long long)timestamp;
- (void).cxx_destruct;

@end
