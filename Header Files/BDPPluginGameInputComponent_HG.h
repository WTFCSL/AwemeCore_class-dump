//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, BDPInputView_HG;

@interface BDPPluginGameInputComponent_HG : BDPBridgeInstancePlugin <BDPInputViewDelegate_HG> {
    BDPUniqueID *_uniqueID;
    BDPInputView_HG *_keyborad;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showKeyboardWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)hideKeyboardWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateKeyboardWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)BDPInputView_HG:(id)arg0 didConfirm:(id)arg1;
- (void)BDPInputView_HG:(id)arg0 didKeyboardHide:(id)arg1;
- (void)BDPInputView_HG:(id)arg0 didContentChange:(id)arg1;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
