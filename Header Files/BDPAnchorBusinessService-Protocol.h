//
//     Generated by private class-dump
//

@protocol BDPAnchorBusinessService <BDPService>

@property (nonatomic) unsigned long long currentMode;
@property (nonatomic) long long anchorType;

- (void)showAnchorButtonOnController:(id)arg0 withUniqueID:(id)arg1;
- (BOOL)needExsitConfrim;
- (void)showExsitConfrimWithCompletion:(id /* block */)arg0;
- (void)handleLiveMountWithParams:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (unsigned long long)currentMode;
- (long long)anchorType;
- (void)setCurrentMode:(unsigned long long)arg0;
- (void)setAnchorType:(long long)arg0;

@end
