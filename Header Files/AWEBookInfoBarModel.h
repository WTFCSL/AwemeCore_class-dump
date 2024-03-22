//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBookInfoBarModel : MTLModel <MTLJSONSerializing> {
    NSString *_bookID;
    NSString *_bookTitle;
    NSString *_jumpInnerSchema;
}

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *jumpInnerSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setBookID:(id)arg0;
- (id)bookID;
- (id)jumpInnerSchema;
- (void)setJumpInnerSchema:(id)arg0;
- (void).cxx_destruct;
- (id)bookTitle;
- (void)setBookTitle:(id)arg0;

@end