//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveLifeGXImageView : UIImageView <GXImageViewProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gx_resetForReuse;
- (void)gx_setMarkInfo:(id)arg0;
- (void)gx_setSummaryInfo:(id)arg0;
- (void)gx_setImageWithURLArray:(id)arg0 placeholderImage:(id)arg1 completed:(id /* block */)arg2;
- (void)gx_setImageWithURLString:(id)arg0 placeholderImage:(id)arg1 completed:(id /* block */)arg2;
- (void)gx_setLocalImage:(id)arg0;
- (void)trackerImageMonitor:(double)arg0 endTime:(double)arg1 url:(id)arg2 image:(id)arg3;

@end
