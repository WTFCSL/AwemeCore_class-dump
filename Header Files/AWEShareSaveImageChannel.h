//
//     Generated by private class-dump
//

@interface AWEShareSaveImageChannel : AWEShareBaseChannel {
    long long _shareCategory;
}

@property (nonatomic) long long shareCategory;

- (id)shareImage;
- (long long)shareCategory;
- (id)trackingLabel;
- (void)shareWithCompletion:(id /* block */)arg0;
- (void)setShareCategory:(long long)arg0;
- (id)init;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end