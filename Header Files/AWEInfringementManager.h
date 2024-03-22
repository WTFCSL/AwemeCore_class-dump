//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEInfringementManager : NSObject <AWEInfringementManagerProtocol> {
    NSString *_infringementReportId;
    NSString *_remindText;
    NSString *_detailURL;
    long long _showDetailCountLimit;
    long long _showDaysLimit;
    NSString *_userID;
    NSDate *_lastTapTime;
}

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSDate *lastTapTime;
@property (copy, nonatomic) NSString *infringementReportId;
@property (copy, nonatomic) NSString *remindText;
@property (copy, nonatomic) NSString *detailURL;
@property (nonatomic) long long showDetailCountLimit;
@property (nonatomic) long long showDaysLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)detailURL;
- (void)setDetailURL:(id)arg0;
- (void)setShowDaysLimit:(long long)arg0;
- (long long)showDaysLimit;
- (id)infringementReportId;
- (id)remindText;
- (long long)showDetailCountLimit;
- (id)getNowDate;
- (void)setShowDetailCountLimit:(long long)arg0;
- (id)getUserInfoWithUserId:(id)arg0;
- (void)clearStorageInfo;
- (void)resetInfringementData;
- (void)setInfringementReportId:(id)arg0;
- (void)setRemindText:(id)arg0;
- (void)updateStorageWith:(id)arg0;
- (BOOL)shouldShowInfringementView;
- (void)infringementCloseWithType:(unsigned long long)arg0;
- (void)updateInfringementData:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)lastTapTime;
- (void)setLastTapTime:(id)arg0;

@end