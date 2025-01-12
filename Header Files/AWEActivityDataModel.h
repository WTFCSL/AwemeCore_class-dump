//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface AWEActivityDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _hidePendantAllTime;
    NSArray *_normalPendantData;
    NSArray *_taskPendantData;
    NSArray *_redPackgePendantData;
    NSDictionary *_bubbleData;
    NSArray *_pendantPriority;
    NSString *_currentActivityStage;
    NSArray *_popupTimeList;
}

@property (retain, nonatomic) NSArray *normalPendantData;
@property (retain, nonatomic) NSArray *taskPendantData;
@property (retain, nonatomic) NSArray *redPackgePendantData;
@property (retain, nonatomic) NSDictionary *bubbleData;
@property (retain, nonatomic) NSArray *pendantPriority;
@property (retain, nonatomic) NSString *currentActivityStage;
@property (retain, nonatomic) NSArray *popupTimeList;
@property (nonatomic) BOOL hidePendantAllTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalPendantDataJSONTransformer;
+ (id)taskPendantDataJSONTransformer;
+ (id)redPackgePendantDataJSONTransformer;
+ (id)popupTimeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)pendantPriority;
- (id)redPackgePendantData;
- (id)taskPendantData;
- (id)normalPendantData;
- (void)setPendantPriority:(id)arg0;
- (BOOL)hidePendantAllTime;
- (id)initWithNormalPendantData:(id)arg0 taskPendantData:(id)arg1 redPackgePendantData:(id)arg2;
- (void)setNormalPendantData:(id)arg0;
- (void)setTaskPendantData:(id)arg0;
- (void)setRedPackgePendantData:(id)arg0;
- (id)bubbleData;
- (void)setBubbleData:(id)arg0;
- (id)currentActivityStage;
- (void)setCurrentActivityStage:(id)arg0;
- (id)popupTimeList;
- (void)setPopupTimeList:(id)arg0;
- (void)setHidePendantAllTime:(BOOL)arg0;
- (void).cxx_destruct;

@end
