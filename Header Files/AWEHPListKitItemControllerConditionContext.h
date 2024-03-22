//
//     Generated by private class-dump
//

@protocol AWEHPListKitItemControllerObjectProtocol, AWEHPListKitModuleControllerProtocol;

@interface AWEHPListKitItemControllerConditionContext : NSObject {
    id<AWEHPListKitItemControllerObjectProtocol> _itemControllerObject;
    id<AWEHPListKitModuleControllerProtocol> _moduleController;
    long long _sectionIndex;
    long long _itemIndex;
}

@property (retain, nonatomic) id<AWEHPListKitItemControllerObjectProtocol> itemControllerObject;
@property (retain, nonatomic) id<AWEHPListKitModuleControllerProtocol> moduleController;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) long long itemIndex;

- (id)itemControllerObject;
- (void)setItemControllerObject:(id)arg0;
- (void).cxx_destruct;
- (long long)itemIndex;
- (void)setItemIndex:(long long)arg0;
- (long long)sectionIndex;
- (void)setSectionIndex:(long long)arg0;
- (id)moduleController;
- (void)setModuleController:(id)arg0;

@end