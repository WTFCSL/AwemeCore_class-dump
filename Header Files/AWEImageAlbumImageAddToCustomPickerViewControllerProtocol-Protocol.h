//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEImageAlbumImageAddToCustomPickerViewControllerProtocol <NSObject>

@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) BOOL isShowing;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)showOnView:(id)arg0 withImages:(id)arg1 awemeModel:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)dismissAnimated:(BOOL)arg0;
- (BOOL)isShowing;

@end
