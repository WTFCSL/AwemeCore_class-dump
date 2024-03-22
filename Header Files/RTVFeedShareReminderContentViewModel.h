//
//     Generated by private class-dump
//

@class NSString;

@interface RTVFeedShareReminderContentViewModel : NSObject {
    long long _resourceType;
    NSString *_resourceURI;
    NSString *_tips;
}

@property (readonly, nonatomic) long long resourceType;
@property (readonly, copy, nonatomic) NSString *resourceURI;
@property (readonly, copy, nonatomic) NSString *tips;

- (id)resourceURI;
- (id)initWithResourceType:(long long)arg0 uri:(id)arg1 tips:(id)arg2;
- (id)tips;
- (long long)resourceType;
- (void).cxx_destruct;

@end
