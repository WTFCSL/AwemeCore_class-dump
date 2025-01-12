//
//     Generated by private class-dump
//

@class NSArray, AWEProgressThumbUIConfig;

@interface AWEProgressPreviewViewStatusUIConfig : NSObject {
    NSArray *_bigThumbs;
    AWEProgressThumbUIConfig *_thumbNormalConfig;
    AWEProgressThumbUIConfig *_thumbActiveConfig;
    AWEProgressThumbUIConfig *_thumbDraggingConfig;
    AWEProgressThumbUIConfig *_thumbStableConfig;
}

@property (copy, nonatomic) NSArray *bigThumbs;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbNormalConfig;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbActiveConfig;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbDraggingConfig;
@property (retain, nonatomic) AWEProgressThumbUIConfig *thumbStableConfig;

- (id)bigThumbs;
- (void)setBigThumbs:(id)arg0;
- (id)thumbNormalConfig;
- (void)setThumbNormalConfig:(id)arg0;
- (id)thumbActiveConfig;
- (void)setThumbActiveConfig:(id)arg0;
- (id)thumbDraggingConfig;
- (void)setThumbDraggingConfig:(id)arg0;
- (id)thumbStableConfig;
- (void)setThumbStableConfig:(id)arg0;
- (void).cxx_destruct;

@end
