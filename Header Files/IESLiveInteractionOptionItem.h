//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInteractionOptionItem : NSObject {
    BOOL _selected;
    long long _tag;
    NSString *_desc;
}

@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL selected;

- (BOOL)selected;
- (id)desc;
- (id)init;
- (void).cxx_destruct;
- (void)setTag:(long long)arg0;
- (long long)tag;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)setDesc:(id)arg0;

@end
