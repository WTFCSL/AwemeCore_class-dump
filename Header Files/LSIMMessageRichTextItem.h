//
//     Generated by private class-dump
//

@class NSString, LSIMMessageRichTextAction;

@interface LSIMMessageRichTextItem : NSObject {
    NSString *_text;
    LSIMMessageRichTextAction *_action;
    LSIMMessageRichTextAction *_defaultAction;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LSIMMessageRichTextAction *action;
@property (retain, nonatomic) LSIMMessageRichTextAction *defaultAction;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setDefaultAction:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (id)text;
- (id)defaultAction;

@end
