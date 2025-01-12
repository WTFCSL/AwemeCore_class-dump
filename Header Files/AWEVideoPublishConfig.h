//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol AWEStudioAwemeModelProtocol;

@interface AWEVideoPublishConfig : NSObject {
    id<AWEStudioAwemeModelProtocol> _aweme;
    NSString *_filePath;
    NSString *_enterFrom;
    NSString *_shootWay;
    NSString *_contentType;
    NSString *_publishTitle;
    NSArray *_challenges;
}

@property (retain, nonatomic) id<AWEStudioAwemeModelProtocol> aweme;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *publishTitle;
@property (copy, nonatomic) NSArray *challenges;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)aweme;
- (void)setShootWay:(id)arg0;
- (void)setPublishTitle:(id)arg0;
- (void)setAweme:(id)arg0;
- (id)publishTitle;
- (id)shootWay;
- (void)setContentType:(id)arg0;
- (id)contentType;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (id)challenges;
- (void)setChallenges:(id)arg0;

@end
