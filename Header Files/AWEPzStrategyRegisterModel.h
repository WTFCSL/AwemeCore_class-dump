//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPzStrategyRegisterModel : NSObject {
    BOOL _needConsumePzDBRecord;
    BOOL _canSubThreadExecute;
    Class _strategyClass;
    NSString *_type;
}

@property (retain, nonatomic) Class strategyClass;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL needConsumePzDBRecord;
@property (nonatomic) BOOL canSubThreadExecute;

- (Class)strategyClass;
- (void)setStrategyClass:(Class)arg0;
- (BOOL)needConsumePzDBRecord;
- (BOOL)canSubThreadExecute;
- (void)setNeedConsumePzDBRecord:(BOOL)arg0;
- (void)setCanSubThreadExecute:(BOOL)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;

@end