//
//     Generated by private class-dump
//

@class NSMapTable;

@interface BDPPluginAppInputXComponent : BDPBridgeInstancePlugin {
    NSMapTable *_views;
}

@property (retain, nonatomic) NSMapTable *views;

+ (unsigned long long)pluginMode;

- (void)hideKeyboardWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)endEditingWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setKeyboardValueWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)insertInputWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateInputWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeInputWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)insertTextAreaWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateTextAreaWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeTextAreaWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (id)views;
- (void).cxx_destruct;
- (void)setViews:(id)arg0;

@end
