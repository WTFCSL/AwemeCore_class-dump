//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerFontCommand : AWENewVideoCoverCommand {
    NSMutableArray *_originFonts;
    long long _nowType;
    NSString *_nowResourceId;
}

@property (retain, nonatomic) NSMutableArray *originFonts;
@property (nonatomic) long long nowType;
@property (retain, nonatomic) NSString *nowResourceId;

- (void)setNowType:(long long)arg0;
- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginFonts:(id)arg0;
- (id)originFonts;
- (long long)nowType;
- (id)nowResourceId;
- (void)setNowResourceId:(id)arg0;
- (void).cxx_destruct;

@end
