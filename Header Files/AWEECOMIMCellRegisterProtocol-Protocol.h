//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWEECOMIMCellRegisterProtocol <NSObject>

@property (readonly, copy, nonatomic) NSDictionary *messageBodyTypeDict;

- (void)registerCellModelClass:(Class)arg0 withMessgeType:(long long)arg1;
- (id)allCellModels;
- (Class)modelClassWithBodyType:(long long)arg0 message:(id)arg1;
- (void)registerAllCellModelClass;
- (id)messageBodyTypeDict;

@end
