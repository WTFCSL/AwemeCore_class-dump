//
//     Generated by private class-dump
//

@protocol IESECLiveGoodsListViewEnvironment, IESECLiveStorage;

@protocol IESECLiveGoodsListEnvProvider <NSObject>

@property (readonly, weak, nonatomic) id<IESECLiveStorage> storage;
@property (readonly, weak, nonatomic) id<IESECLiveGoodsListViewEnvironment> env;

- (id)env;
- (id)storage;

@end