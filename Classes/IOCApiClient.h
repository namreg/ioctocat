#import "AFNetworking.h"
#import "AFHTTPClient.h"


@interface IOCApiClient : AFHTTPClient
- (void)enablePushNotificationsForDevice:(NSString *)deviceToken accessToken:(NSString *)accessToken success:(void (^)(id json))success failure:(void (^)(NSError *error))failure;
- (void)disablePushNotificationsForDevice:(NSString *)deviceToken accessToken:(NSString *)accessToken success:(void (^)(id json))success failure:(void (^)(NSError *error))failure;
@end