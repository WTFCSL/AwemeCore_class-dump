//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAccessibilityInsertConfig : NSObject {
    long long _embeddedType;
    long long _postionType;
    NSString *_relativeViewIdentify;
    id /* block */ _clickBlock;
    id /* block */ _attributeBuilder;
    id _itemElement;
    struct CGSize { double width; double height; } _customViewSize;
    struct CGPoint { double x; double y; } _absolutelyPointOrigin;
    struct UIOffset { double horizontal; double vertical; } _relativelyOffset;
}

@property (retain, nonatomic) id itemElement;
@property (nonatomic) long long embeddedType;
@property (nonatomic) long long postionType;
@property (nonatomic) struct CGSize { double width; double height; } customViewSize;
@property (nonatomic) struct CGPoint { double x; double y; } absolutelyPointOrigin;
@property (retain, nonatomic) NSString *relativeViewIdentify;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } relativelyOffset;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ attributeBuilder;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (id)itemElement;
- (void)setItemElement:(id)arg0;
- (void)setCustomViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setAbsolutelyPointOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (void)setRelativelyOffset:(struct UIOffset { double x0; double x1; })arg0;
- (long long)embeddedType;
- (void)setEmbeddedType:(long long)arg0;
- (long long)postionType;
- (void)setPostionType:(long long)arg0;
- (struct CGSize { double x0; double x1; })customViewSize;
- (struct CGPoint { double x0; double x1; })absolutelyPointOrigin;
- (id)relativeViewIdentify;
- (void)setRelativeViewIdentify:(id)arg0;
- (struct UIOffset { double x0; double x1; })relativelyOffset;
- (id /* block */)attributeBuilder;
- (void)setAttributeBuilder:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;

@end