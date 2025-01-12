//
//     Generated by private class-dump
//

@interface CJPayECVerifyManagerQueen : CJPayBaseVerifyManagerQueen {
    double _beforeConfirmRequestTimestamp;
    double _afterConfirmRequestTimestamp;
    double _afterQueryResultTimestamp;
}

@property (nonatomic) double beforeConfirmRequestTimestamp;
@property (nonatomic) double afterConfirmRequestTimestamp;
@property (nonatomic) double afterQueryResultTimestamp;

- (void)afterConfirmRequestWithResponse:(id)arg0;
- (id)cashierExtraTrackerParams;
- (void)afterLastQueryResultWithResultResponse:(id)arg0;
- (void)beforeConfirmRequest;
- (void)beforQueryResult;
- (id)p_activityInfoParamsWithVoucherArray:(id)arg0;
- (id)p_checkTypeMapString:(id)arg0;
- (double)beforeConfirmRequestTimestamp;
- (double)afterConfirmRequestTimestamp;
- (double)afterQueryResultTimestamp;
- (void)setBeforeConfirmRequestTimestamp:(double)arg0;
- (void)setAfterConfirmRequestTimestamp:(double)arg0;
- (void)setAfterQueryResultTimestamp:(double)arg0;

@end
