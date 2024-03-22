//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface CJPayTransferPayManager : NSObject <CJPayTransferPayModule> {
    NSMutableArray *_mutableControllers;
}

@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (id)mutableControllers;
- (void)setMutableControllers:(id)arg0;
- (void)startTransferPayWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;

@end
