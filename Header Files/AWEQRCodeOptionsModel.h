//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController, AWEShareContext;

@interface AWEQRCodeOptionsModel : AWEBaseApiModel {
    BOOL _enableShare;
    unsigned long long _codeType;
    AWEShareContext *_shareContext;
    UIViewController *_fromController;
    NSDictionary *_trackDict;
}

@property (nonatomic) unsigned long long codeType;
@property (nonatomic) BOOL enableShare;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) UIViewController *fromController;
@property (retain, nonatomic) NSDictionary *trackDict;

- (void)setShareContext:(id)arg0;
- (void)setEnableShare:(BOOL)arg0;
- (void)setFromController:(id)arg0;
- (void)setTrackDict:(id)arg0;
- (BOOL)enableShare;
- (id)trackDict;
- (id)shareContext;
- (id)fromController;
- (void).cxx_destruct;
- (unsigned long long)codeType;
- (void)setCodeType:(unsigned long long)arg0;

@end