//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDanmakuActivityResourcesModel : NSObject {
    NSString *_resourceID;
    NSString *_url;
    NSString *_urlMd5;
    NSString *_serverMd5;
}

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlMd5;
@property (copy, nonatomic) NSString *serverMd5;

- (id)initWithUrl:(id)arg0 resourceID:(id)arg1 urlMd5:(id)arg2 serverMd5:(id)arg3;
- (id)urlMd5;
- (void)setUrlMd5:(id)arg0;
- (id)serverMd5;
- (void)setServerMd5:(id)arg0;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (void)setUrl:(id)arg0;
- (id)url;

@end
