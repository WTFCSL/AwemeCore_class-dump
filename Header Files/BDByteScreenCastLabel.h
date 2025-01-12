//
//     Generated by private class-dump
//

@class NSString, BDSCBackgroundUIModel;

@interface BDByteScreenCastLabel : NSObject {
    BDSCBackgroundUIModel *_background;
    NSString *_textColor;
    NSString *_text;
}

@property (retain, nonatomic) BDSCBackgroundUIModel *background;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *text;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (id)background;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setBackground:(id)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;

@end
