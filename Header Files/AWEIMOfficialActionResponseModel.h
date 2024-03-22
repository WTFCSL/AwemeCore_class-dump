//
//     Generated by private class-dump
//

@class NSNumber, AWEActionResponseModel, NSArray;

@interface AWEIMOfficialActionResponseModel : AWEBaseApiModel {
    BOOL _awemeItemDisable;
    BOOL _noticeDisable;
    NSNumber *_noticeID;
    long long _actionStatus;
    AWEActionResponseModel *_actionResponse;
    NSArray *_disableKeys;
}

@property (copy, nonatomic) NSNumber *noticeID;
@property (nonatomic) long long actionStatus;
@property (retain, nonatomic) AWEActionResponseModel *actionResponse;
@property (nonatomic) BOOL awemeItemDisable;
@property (nonatomic) BOOL noticeDisable;
@property (copy, nonatomic) NSArray *disableKeys;

+ (id)actionResponseJSONTransformer;
+ (id)actionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setNoticeID:(id)arg0;
- (id)noticeID;
- (long long)actionStatus;
- (void)setActionStatus:(long long)arg0;
- (BOOL)awemeItemDisable;
- (BOOL)noticeDisable;
- (id)disableKeys;
- (void)setAwemeItemDisable:(BOOL)arg0;
- (void)setNoticeDisable:(BOOL)arg0;
- (void)setDisableKeys:(id)arg0;
- (void).cxx_destruct;
- (id)actionResponse;
- (void)setActionResponse:(id)arg0;

@end
