//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary, IESLiveIAPModel;

@interface IESLiveIAPPayModel : NSObject {
    IESLiveIAPModel *_iapModel;
    NSNumber *_source;
    NSDictionary *_extraParams;
}

@property (retain, nonatomic) IESLiveIAPModel *iapModel;
@property (retain, nonatomic) NSNumber *source;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)initWithIapModel:(id)arg0 source:(id)arg1 extraParams:(id)arg2;
- (id)iapModel;
- (void)setIapModel:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setSource:(id)arg0;

@end
