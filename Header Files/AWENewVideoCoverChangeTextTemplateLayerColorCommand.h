//
//     Generated by private class-dump
//

@class UIColor, NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerColorCommand : AWENewVideoCoverCommand {
    NSMutableArray *_originColors;
    UIColor *_nowColor;
}

@property (retain, nonatomic) NSMutableArray *originColors;
@property (retain, nonatomic) UIColor *nowColor;

- (void)realExecute;
- (void)realUnExecute;
- (id)nowColor;
- (void)setNowColor:(id)arg0;
- (void)setOriginColors:(id)arg0;
- (id)originColors;
- (void).cxx_destruct;

@end
