//
//     Generated by private class-dump
//

@class NSString, NSURL;

@interface AWEIMIncentiveChatCellConfDetail : NSObject {
    NSString *_title;
    NSString *_subtitle;
    NSString *_schema;
    NSURL *_iconURL;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSURL *iconURL;

- (id)dictionaryRawData;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)initWithDictionary:(id)arg0;
- (id)iconURL;
- (id)title;
- (id)subtitle;
- (id)schema;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;

@end
