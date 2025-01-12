//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESECListKitCellRegister : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_cellControllerClassMap;
}

@property (retain, nonatomic) NSMutableDictionary *cellControllerClassMap;

+ (id)defaultRegister;

- (void)registerCellControllerClass:(Class)arg0 withItemType:(unsigned long long)arg1;
- (Class)getCellControllerClassForItem:(unsigned long long)arg0;
- (id)cellControllerClassMap;
- (Class)getCellClassForItem:(unsigned long long)arg0;
- (Class)getCellModelClassForItem:(unsigned long long)arg0;
- (void)setCellControllerClassMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
