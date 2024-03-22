//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface HGSharePrepareModel : NSObject {
    NSString *_title;
    NSString *_imageUrl;
    NSString *_query;
    NSString *_channel;
    NSString *_shareChannel;
    NSString *_imgURI;
    NSString *_linkTitle;
    NSString *_templateId;
    NSString *_desc;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *shareChannel;
@property (copy, nonatomic) NSString *imgURI;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSDictionary *extra;

- (void)setExtra:(id)arg0;
- (id)imgURI;
- (void)setImgURI:(id)arg0;
- (id)shareChannel;
- (void)setShareChannel:(id)arg0;
- (id)desc;
- (id)channel;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)extra;
- (id)title;
- (id)query;
- (void)setQuery:(id)arg0;
- (void)setDesc:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)linkTitle;
- (void)setLinkTitle:(id)arg0;

@end