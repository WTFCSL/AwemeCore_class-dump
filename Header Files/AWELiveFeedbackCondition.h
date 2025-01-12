//
//     Generated by private class-dump
//

@class NSArray;

@interface AWELiveFeedbackCondition : AWEBaseApiModel {
    long long _fromTime;
    long long _toTime;
    NSArray *_actionIdsArray;
    long long _actionType;
    long long _previewTime;
}

@property (nonatomic) long long fromTime;
@property (nonatomic) long long toTime;
@property (retain, nonatomic) NSArray *actionIdsArray;
@property (nonatomic) long long actionType;
@property (nonatomic) long long previewTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setFromTime:(long long)arg0;
- (long long)fromTime;
- (long long)toTime;
- (id)actionIdsArray;
- (long long)previewTime;
- (void)setToTime:(long long)arg0;
- (void)setActionIdsArray:(id)arg0;
- (void)setPreviewTime:(long long)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;
- (void).cxx_destruct;

@end
