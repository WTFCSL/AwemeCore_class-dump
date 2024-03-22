//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEFollowYellowDotTrackManager : NSObject <AWEFollowYellowDotTrackManagerProtocol> {
    BOOL _isValid;
    NSString *_yellowType;
    NSString *_logID;
    long long _yellowNum;
    NSDate *_resignActiveDate;
    NSDate *_becomeActiveDate;
}

@property (copy, nonatomic) NSString *yellowType;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) BOOL isValid;
@property (nonatomic) long long yellowNum;
@property (retain, nonatomic) NSDate *resignActiveDate;
@property (retain, nonatomic) NSDate *becomeActiveDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tabBarDidChangeNotification:(id)arg0;
- (void)trackLiveBubbleDismissedWithBubbleModel:(id)arg0 channelID:(id)arg1 reason:(long long)arg2;
- (void)trackLiveYellowDotDismissedWithDotType:(id)arg0 channelID:(id)arg1 componentID:(id)arg2 hideType:(long long)arg3;
- (void)updateValidStatus:(BOOL)arg0 yellowNum:(long long)arg1 yellowType:(id)arg2;
- (void)setYellowNum:(long long)arg0;
- (void)setYellowType:(id)arg0;
- (long long)yellowNum;
- (id)yellowType;
- (void)setResignActiveDate:(id)arg0;
- (id)resignActiveDate;
- (void)setBecomeActiveDate:(id)arg0;
- (id)becomeActiveDate;
- (void)updateValidStatus:(BOOL)arg0;
- (id)withdrawStringWithReason:(long long)arg0;
- (id)withdrawStringWithHide:(long long)arg0;
- (void)updateYellowDotLogID:(id)arg0;
- (id)trackDicForYellowDot;
- (id)init;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)appDidBecomeActive:(id)arg0;
- (void)dealloc;
- (void)appWillResignActive:(id)arg0;
- (id)logID;
- (void)setLogID:(id)arg0;

@end
