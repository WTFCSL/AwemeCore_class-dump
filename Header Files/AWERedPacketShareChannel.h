//
//     Generated by private class-dump
//

@class AWEIMVideoRedpacketManager, NSString;

@interface AWERedPacketShareChannel : AWEShareBaseChannel <AWEShareItemDelegate> {
    AWEIMVideoRedpacketManager *_redPacketManager;
}

@property (retain, nonatomic) AWEIMVideoRedpacketManager *redPacketManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareImage;
- (void)shareItem:(id)arg0 willAppear:(BOOL)arg1;
- (void)shareWithCompletion:(id /* block */)arg0;
- (id)redPacketManager;
- (void)setRedPacketManager:(id)arg0;
- (void)p_showSendRedPacketVCWithCompletion:(id /* block */)arg0;
- (void)p_showDialog;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end