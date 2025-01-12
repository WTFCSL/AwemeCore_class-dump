//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEAwemeModel;

@interface BDATMStaticValue : HTSService <BDATMStaticValue> {
    NSString *anchorId;
    NSString *atmValueStatic;
    AWEAwemeModel *aweme;
    id /* block */ durationBlock;
    NSNumber *nt;
    id /* block */ playPercentBlock;
    NSNumber *pricingType;
    NSString *roomId;
    id /* block */ stayTimeBlock;
    Class superclass;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (id /* block */)durationBlock;
- (id /* block */)stayTimeBlock;
- (id /* block */)playPercentBlock;
- (id)pricingType;
- (void)setPricingType:(id)arg0;
- (id)nt;
- (void)setDurationBlock:(id /* block */)arg0;
- (void)setStayTimeBlock:(id /* block */)arg0;
- (void)setPlayPercentBlock:(id /* block */)arg0;
- (void)setNt:(id)arg0;
- (id)atmValueStatic;
- (void)setAtmValueStatic:(id)arg0;
- (void).cxx_destruct;
- (Class)superclass;

@end
