//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage, AWEURLModel;

@interface AWELiveShareBottomCardModel : NSObject <NSCopying> {
    unsigned long long _cardStyle;
    AWEURLModel *_imageURL;
    UIImage *_image;
    NSString *_mainTitle;
    NSString *_highlightStr;
    NSString *_subTitle;
    NSDictionary *_trackInfo;
    NSDictionary *_enterRoomParams;
}

@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSString *highlightStr;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) NSDictionary *enterRoomParams;

- (id)enterRoomParams;
- (void)setEnterRoomParams:(id)arg0;
- (void)setHighlightStr:(id)arg0;
- (id)highlightStr;
- (void).cxx_destruct;
- (id)image;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (void)setImage:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (unsigned long long)cardStyle;
- (void)setCardStyle:(unsigned long long)arg0;

@end
