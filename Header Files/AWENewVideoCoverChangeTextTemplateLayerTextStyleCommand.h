//
//     Generated by private class-dump
//

@class AWEStoryTextImageModel, NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerTextStyleCommand : AWENewVideoCoverCommand {
    unsigned long long _textStyle;
    AWEStoryTextImageModel *_textModel;
    NSMutableArray *_originForegroundColors;
    NSMutableArray *_originOutlines;
    NSMutableArray *_originOutlineWidths;
    NSMutableArray *_originOutlineColors;
    NSMutableArray *_originBackgroundColors;
}

@property (retain, nonatomic) NSMutableArray *originForegroundColors;
@property (retain, nonatomic) NSMutableArray *originOutlines;
@property (retain, nonatomic) NSMutableArray *originOutlineWidths;
@property (retain, nonatomic) NSMutableArray *originOutlineColors;
@property (retain, nonatomic) NSMutableArray *originBackgroundColors;
@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;

- (id)textModel;
- (void)setTextModel:(id)arg0;
- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginForegroundColors:(id)arg0;
- (void)setOriginOutlines:(id)arg0;
- (void)setOriginOutlineWidths:(id)arg0;
- (void)setOriginOutlineColors:(id)arg0;
- (void)setOriginBackgroundColors:(id)arg0;
- (id)originForegroundColors;
- (id)originOutlines;
- (id)originOutlineWidths;
- (id)originOutlineColors;
- (id)originBackgroundColors;
- (unsigned long long)textStyle;
- (void).cxx_destruct;
- (void)setTextStyle:(unsigned long long)arg0;

@end
