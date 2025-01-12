//
//     Generated by private class-dump
//

@class NSArray, UIView;

@protocol IESECMediaPreviewProtocol <NSObject>

@property (retain, nonatomic) NSArray *videoInfoArray;
@property (copy, nonatomic) NSArray *imageURlsList;
@property (copy, nonatomic) NSArray *titles;
@property (nonatomic) long long index;
@property (nonatomic) long long titleType;
@property (weak, nonatomic) UIView *thumbnailView;
@property (copy, nonatomic) id /* block */ didSwipe;
@property (copy, nonatomic) id /* block */ willDismiss;
@property (copy, nonatomic) id /* block */ didDismiss;

- (void)setImageURlsList:(id)arg0;
- (void)setVideoInfoArray:(id)arg0;
- (void)setWillDismiss:(id /* block */)arg0;
- (void)setDidSwipe:(id /* block */)arg0;
- (id)videoInfoArray;
- (id)imageURlsList;
- (id /* block */)didSwipe;
- (void)setIndex:(long long)arg0;
- (id /* block */)didDismiss;
- (void)show;
- (long long)titleType;
- (id /* block */)willDismiss;
- (long long)index;
- (void)setTitleType:(long long)arg0;
- (id)titles;
- (void)setTitles:(id)arg0;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg0;
- (void)setDidDismiss:(id /* block */)arg0;

@end
