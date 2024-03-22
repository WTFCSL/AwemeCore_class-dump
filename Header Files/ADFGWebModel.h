//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface ADFGWebModel : NSObject {
    BOOL _scrollEnabled;
    BOOL _showLocalSubmitRecord;
    BOOL _isExpired;
    NSDictionary *_extraUserInfo;
    double _timeoutInterval;
    NSString *_taskID;
    NSDictionary *_taskSettingDict;
}

@property (retain, nonatomic) NSDictionary *extraUserInfo;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL showLocalSubmitRecord;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSDictionary *taskSettingDict;
@property (nonatomic) BOOL isExpired;

- (void)setShowLocalSubmitRecord:(BOOL)arg0;
- (void)setTaskSettingDict:(id)arg0;
- (id)taskSettingDict;
- (BOOL)showLocalSubmitRecord;
- (id)extraUserInfo;
- (void)setExtraUserInfo:(id)arg0;
- (void)setScrollEnabled:(BOOL)arg0;
- (BOOL)isExpired;
- (id)init;
- (BOOL)scrollEnabled;
- (void)setTimeoutInterval:(double)arg0;
- (void).cxx_destruct;
- (double)timeoutInterval;
- (id)taskID;
- (void)setTaskID:(id)arg0;
- (void)setIsExpired:(BOOL)arg0;

@end
