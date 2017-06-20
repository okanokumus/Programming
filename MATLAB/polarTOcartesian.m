function [xx,yy]=polarTOcartesian(r,t)
% [x,y] = pol2cart(theta,rho)

% polar to cartesian
% Polar(r,t) Cartesian(x,y)
%  x=r*cos(t) y=r*sin(t) t must be in degree
[m n]=size(r);
for i=1:1:n
    xx(i)=r(i)*cosd(t(i));
    yy(i)=r(i)*sind(t(i));
end

end