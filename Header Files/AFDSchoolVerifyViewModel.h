//
//     Generated by private class-dump
//

@class NSString, AFDSchoolVerifyConfig;
@protocol AFDSchoolVerifyViewModelDelegate;

@interface AFDSchoolVerifyViewModel : NSObject {
    BOOL _showSheetLoading;
    BOOL _showConfirmButtonLoading;
    NSString *_displaySchoolName;
    NSString *_enterFromString;
    id<AFDSchoolVerifyViewModelDelegate> _delegate;
    AFDSchoolVerifyConfig *_config;
    NSString *_schoolName;
    NSString *_schoolID;
    long long _schoolNameFrom;
    long long _currentFailCount;
}

@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *schoolID;
@property (nonatomic) long long schoolNameFrom;
@property (nonatomic) long long currentFailCount;
@property (copy, nonatomic) NSString *displaySchoolName;
@property (copy, nonatomic) NSString *enterFromString;
@property (nonatomic) BOOL showSheetLoading;
@property (nonatomic) BOOL showConfirmButtonLoading;
@property (weak, nonatomic) id<AFDSchoolVerifyViewModelDelegate> delegate;
@property (retain, nonatomic) AFDSchoolVerifyConfig *config;

- (id)enterFromString;
- (void)setSchoolName:(id)arg0;
- (id)schoolID;
- (void)setEnterFromString:(id)arg0;
- (void)setSchoolID:(id)arg0;
- (long long)maxFailVerifyCount;
- (BOOL)shouldSkipLocationVerify;
- (void)fetchUserSchoolData;
- (void)startVerify;
- (void)trackClosePanelWithMethod:(id)arg0 panelType:(id)arg1;
- (void)updateSchoolName:(id)arg0;
- (void)trackSelectSchoolShow;
- (id)p_currentFailedCountKey;
- (void)setCurrentFailCount:(long long)arg0;
- (void)setShowSheetLoading:(BOOL)arg0;
- (void)setDisplaySchoolName:(id)arg0;
- (void)setSchoolNameFrom:(long long)arg0;
- (void)p_trackAlertShow;
- (id)p_enterMethodFromConfig:(id)arg0;
- (id)p_schoolSource;
- (long long)schoolNameFrom;
- (BOOL)showConfirmButtonLoading;
- (void)setShowConfirmButtonLoading:(BOOL)arg0;
- (void)p_trackVerifyResultWithSuccess:(BOOL)arg0;
- (void)verifySchoolWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)p_trackLocationFetchResultWithSuccess:(BOOL)arg0;
- (BOOL)p_isUserSchoolAuthedWithType:(long long)arg0;
- (void)p_trackSetUniversitySuccess;
- (void)disLikeCurrentSchoolItemIfNeeded;
- (long long)currentFailCount;
- (id)displaySchoolName;
- (BOOL)showSheetLoading;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)schoolName;

@end
