//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPageStatusModel : NSObject {
    long long _pageStatusType;
    NSString *_message;
}

@property (readonly) long long pageStatusType;
@property (readonly, copy) NSString *message;

- (id)initWithMessage:(id)arg0 type:(long long)arg1;
- (long long)pageStatusType;
- (void).cxx_destruct;
- (id)message;

@end