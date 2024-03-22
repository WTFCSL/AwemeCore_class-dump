//
//     Generated by private class-dump
//

@class NSString, AWEBinding, NSMutableDictionary;

@interface LSBind : NSObject <LSBind> {
    AWEBinding *_binding;
    NSMutableDictionary *_blocks;
}

@property (retain, nonatomic) AWEBinding *binding;
@property (retain, nonatomic) NSMutableDictionary *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)merge:(id)arg0;
+ (id)combineLatest:(id)arg0;

- (id)bindReusableView:(id)arg0;
- (id)deliverOnMainThread;
- (id)receive:(id)arg0 keyPath:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)blocks;
- (void)removeHandler:(id /* block */)arg0;
- (void)addHandler:(id /* block */)arg0;
- (void)setBlocks:(id)arg0;
- (void)unbind;
- (id)binding;
- (id)distinctUntilChanged;
- (id)skip:(long long)arg0;
- (void)setBinding:(id)arg0;
- (id)observe:(id)arg0 keyPath:(id)arg1;

@end
