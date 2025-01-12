//
//     Generated by private class-dump
//

@class NSString;

@interface BDCreateBtmChainDataModel : IESLiveBridgeModel {
    NSString *_btm;
    NSString *_btmPre;
    NSString *_btmPpre;
    NSString *_btmUnitId;
    NSString *_btmPreUnitId;
    NSString *_btmPpreUnitId;
    NSString *_btmShowId;
    NSString *_btmInstanceId;
    id _btmChain;
    id _bcmDescription;
}

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *btmPre;
@property (copy, nonatomic) NSString *btmPpre;
@property (copy, nonatomic) NSString *btmUnitId;
@property (copy, nonatomic) NSString *btmPreUnitId;
@property (copy, nonatomic) NSString *btmPpreUnitId;
@property (copy, nonatomic) NSString *btmShowId;
@property (copy, nonatomic) NSString *btmInstanceId;
@property (retain, nonatomic) id btmChain;
@property (retain, nonatomic) id bcmDescription;

+ (id)modelCustomPropertyMapper;

- (id)btm;
- (void)setBtm:(id)arg0;
- (id)bcmDescription;
- (void)setBcmDescription:(id)arg0;
- (id)btmPre;
- (void)setBtmPre:(id)arg0;
- (id)btmPpre;
- (void)setBtmPpre:(id)arg0;
- (id)btmShowId;
- (void)setBtmShowId:(id)arg0;
- (id)btmInstanceId;
- (void)setBtmInstanceId:(id)arg0;
- (id)btmUnitId;
- (void)setBtmUnitId:(id)arg0;
- (id)btmPreUnitId;
- (void)setBtmPreUnitId:(id)arg0;
- (id)btmPpreUnitId;
- (void)setBtmPpreUnitId:(id)arg0;
- (id)btmChain;
- (void)setBtmChain:(id)arg0;
- (void).cxx_destruct;

@end
