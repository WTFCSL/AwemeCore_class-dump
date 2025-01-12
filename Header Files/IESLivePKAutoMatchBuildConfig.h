//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLivePKAutoMatchBuildConfig : NSObject {
    BOOL _isHighWay;
    BOOL _ignoreAnnouncementIntercept;
    long long _matchType;
    long long _source;
    NSString *_sourceStr;
    NSString *_activityType;
    NSDictionary *_panelTrackParams;
}

@property (nonatomic) long long matchType;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *sourceStr;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL isHighWay;
@property (nonatomic) BOOL ignoreAnnouncementIntercept;
@property (copy, nonatomic) NSDictionary *panelTrackParams;

- (id)sourceStr;
- (void)setSourceStr:(id)arg0;
- (BOOL)isHighWay;
- (void)setIsHighWay:(BOOL)arg0;
- (BOOL)ignoreAnnouncementIntercept;
- (id)panelTrackParams;
- (void)setPanelTrackParams:(id)arg0;
- (void)setIgnoreAnnouncementIntercept:(BOOL)arg0;
- (id)init;
- (void)setActivityType:(id)arg0;
- (long long)source;
- (void).cxx_destruct;
- (id)activityType;
- (void)setSource:(long long)arg0;
- (long long)matchType;
- (void)setMatchType:(long long)arg0;

@end
