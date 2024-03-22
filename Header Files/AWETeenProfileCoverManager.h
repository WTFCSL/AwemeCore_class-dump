//
//     Generated by private class-dump
//

@interface AWETeenProfileCoverManager : NSObject {
    BOOL _isCounted;
    BOOL _alreadySet;
    BOOL _isTopVideoFullScreen;
    unsigned long long _source;
}

@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL isCounted;
@property (nonatomic) BOOL alreadySet;
@property (nonatomic) BOOL isTopVideoFullScreen;

+ (id)sharedInstance;

- (void)userLogout;
- (BOOL)isTopVideoFullScreen;
- (BOOL)alreadySet;
- (void)setAlreadySet:(BOOL)arg0;
- (void)alreadySetCover;
- (BOOL)useCreativeAlbumKit;
- (void)uploadCoverWithImage:(id)arg0;
- (void)profileCoverTipCounted;
- (void)selectCoverWithSelectedBlock:(id /* block */)arg0;
- (void)setIsTopVideoFullScreen:(BOOL)arg0;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg0;
- (BOOL)isCounted;
- (void)setIsCounted:(BOOL)arg0;

@end
