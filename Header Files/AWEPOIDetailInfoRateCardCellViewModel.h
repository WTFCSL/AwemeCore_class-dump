//
//     Generated by private class-dump
//

@class DitoPageContext, NSString, AWEPOIDetailRateCardView, NSNumber;

@interface AWEPOIDetailInfoRateCardCellViewModel : AWEPOIDetailInfoBaseViewModel {
    BOOL _hasReward;
    DitoPageContext *_context;
    AWEPOIDetailRateCardView *_cardView;
    id /* block */ _onClose;
    NSString *_poiId;
    NSString *_poiBackendType;
    NSString *_poiEnterID;
    NSNumber *_sourceType;
    NSString *_creationIDForToComment;
    long long _attitudeGradesCnt;
}

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiEnterID;
@property (retain, nonatomic) NSNumber *sourceType;
@property (copy, nonatomic) NSString *creationIDForToComment;
@property (nonatomic) BOOL hasReward;
@property (nonatomic) long long attitudeGradesCnt;
@property (weak, nonatomic) DitoPageContext *context;
@property (retain, nonatomic) AWEPOIDetailRateCardView *cardView;
@property (copy, nonatomic) id /* block */ onClose;

+ (double)preferredHeightForDataModel:(id)arg0 width:(double)arg1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg3 cellIdentifier:(id)arg4;
+ (BOOL)shouldShowWithModel:(id)arg0;

- (void)setupViewModel;
- (id)poiBackendType;
- (BOOL)hasReward;
- (void)setPoiBackendType:(id)arg0;
- (id)commonTrackParams;
- (id)poiEnterID;
- (void)setPoiEnterID:(id)arg0;
- (id)creationIDForToComment;
- (void)setCreationIDForToComment:(id)arg0;
- (void)poi_onAppear;
- (void)setHasReward:(BOOL)arg0;
- (void)setAttitudeGradesCnt:(long long)arg0;
- (void)trackClose;
- (void)showModalWithGrade:(id)arg0;
- (id)trackingParamsForToComment;
- (long long)attitudeGradesCnt;
- (void)putPoiEnterID:(id)arg0 sourceType:(id)arg1;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)poiId;
- (void)setPoiId:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
